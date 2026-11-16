import streamlit as st
import firebase_admin
from firebase_admin import credentials, db
import time

# ================= FIREBASE INITIALIZATION =================
if not firebase_admin._apps:
    cred = credentials.Certificate("firebase_key.json")
    firebase_admin.initialize_app(cred, {
        "databaseURL": "https://poultry-farm-6e6a4-default-rtdb.firebaseio.com/"
    })

# ================= READ DATA FROM FIREBASE ROOT =================
ref = db.reference("/")
data = ref.get()

# ================= STREAMLIT PAGE =================
st.set_page_config(
    page_title="Smart Poultry Monitoring System",
    layout="centered"
)

st.title("🐔 Smart Poultry Monitoring System")
st.write("Live data from ESP32 via Firebase")

if data is None:
    st.error("❌ No data found in Firebase")
    st.stop()

# ================= DISPLAY VALUES =================
col1, col2 = st.columns(2)

with col1:
    st.metric("🌡 Temperature (°C)", data.get("temperature", "28"))
    st.metric("🧪 Ammonia / Gas Level", data.get("Gas_data", "198"))

with col2:
    st.metric("🍚 Food Status", data.get("Food Status", "Food is available"))
    st.metric("💧 Water Status", data.get("Water Level", "Water is available"))

# ================= ALERT LOGIC =================
gas = data.get("Gas_data")
temp = data.get("temperature")

if isinstance(gas, (int, float)) and gas > 150:
    st.error("⚠ High Ammonia Level! Fan & Conveyor Activated")

if isinstance(temp, (int, float)) and temp > 35:
    st.warning("⚠ High Temperature! Ventilation ON")

# ================= AUTO REFRESH =================
st.caption("🔄 Auto refresh every 5 seconds")
time.sleep(5)
st.rerun()
