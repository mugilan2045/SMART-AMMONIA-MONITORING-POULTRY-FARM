# **SMART AMMONIA MONITORING FOR SUSTAINABLE POULTRY FARM MANAGEMENT**

### **Project Overview**

Smart Ammonia Monitoring for Sustainable Poultry Farm Management is an IoT and Machine Learning-based application designed to monitor harmful ammonia emissions and maintain a healthy environment inside poultry shelters.

The project addresses the challenges of traditional poultry farm management, where manual monitoring and waste removal methods are time-consuming, inefficient, and unable to respond immediately to harmful gas emissions.

The proposed system integrates environmental sensors, Arduino-based monitoring, and machine learning algorithms to continuously monitor ammonia concentration and environmental conditions. It implements Linear Discriminant Analysis (LDA) and Quadratic Discriminant Analysis (QDA) to classify environmental conditions as normal or harmful.

The system automatically activates exhaust ventilation and conveyor-based waste removal mechanisms when unsafe conditions are detected. Additionally, it incorporates an ammonia recovery mechanism that captures ammonia gas and converts it into ammonium hydroxide using distilled water, promoting sustainable waste management.

## **Project Objectives**

- Develop an intelligent monitoring system for real-time detection of ammonia concentration and environmental conditions in poultry shelters.
- Implement machine learning models, specifically LDA and QDA, for accurate classification of environmental conditions.
- Design an automated control mechanism to activate ventilation systems when harmful ammonia levels are detected.
- Implement a conveyor-based waste removal mechanism to reduce waste accumulation and ammonia generation.
- Develop an ammonia recovery system to convert captured ammonia into ammonium hydroxide.
- Integrate multiple sensors and display units for continuous monitoring of environmental conditions, food, and water levels.
- Improve poultry health, operational efficiency, and environmental sustainability through intelligent automation.

## **Key Features**

- **Real-Time Ammonia Monitoring:** Continuously monitors ammonia concentration inside poultry shelters using gas sensors.
- **Environmental Monitoring:** Measures temperature and monitors food and water levels using connected sensors.
- **Machine Learning-Based Classification:** Implements LDA and QDA algorithms to classify environmental conditions as normal or harmful.
- **Automated Ventilation:** Automatically activates exhaust fans when harmful ammonia conditions are identified.
- **Automatic Waste Removal:** Uses a conveyor belt mechanism to remove accumulated poultry waste and reduce ammonia generation.
- **Ammonia Recovery:** Captures ammonia gas and absorbs it in distilled water to produce ammonium hydroxide.
- **Real-Time Display:** Displays sensor readings and system status through an LCD.
- **Intelligent Decision-Making:** Uses machine learning predictions to support automatic environmental control.
- **Sustainable Waste Management:** Converts harmful ammonia emissions into a useful chemical by-product.

## **Input Variables**

The system uses the following environmental parameters:

| **Variable** | **Description**             |
| ------------ | --------------------------- |
| X1           | Ammonia Concentration (NH₃) |
| X2           | Temperature                 |
| X3           | Food Level                  |
| X4           | Water Level                 |

*Note: The machine learning dataset specifically mentioned in the presentation uses ammonia concentration and temperature for classification. Food and water levels are additional hardware monitoring parameters.*

## **Output Variables**

| **Variable** | **Description**                                         |
| ------------ | ------------------------------------------------------- |
| Y1           | Environmental Condition Classification (Normal/Harmful) |
| Y2           | Exhaust Fan Control Status                              |
| Y3           | Conveyor Belt Control Status                            |
| Y4           | Ammonium Hydroxide Recovery                             |

## **Machine Learning Algorithms**

The project implements and evaluates two machine learning classification algorithms to identify unsafe environmental conditions.

- Linear Discriminant Analysis (LDA)
- Quadratic Discriminant Analysis (QDA)

**Quadratic Discriminant Analysis (QDA)** was selected as the optimal model based on its superior classification performance.

### **Best Model Results – QDA**

- Accuracy: 99.6%
- Precision: 1.000
- Recall: 0.991
- F1-Score: 0.995
- Dataset Splitting: 75% Training and 25% Testing

QDA provides better classification performance by modelling different covariance matrices for normal and harmful environmental conditions.

## **Technical Approach**

1. **Data Collection:** Collects environmental parameters, particularly ammonia concentration and temperature, using connected sensors.
2. **Data Preprocessing:** Cleans, normalizes, and prepares the collected dataset for machine learning.
3. **Dataset Splitting:** Divides the dataset into 75% training data and 25% testing data.
4. **Model Development:** Trains LDA and QDA classification algorithms to identify normal and harmful environmental conditions.
5. **Model Evaluation:** Evaluates model performance using accuracy, precision, recall, F1-score, confusion matrix, and ROC curve.
6. **Model Selection:** Selects QDA as the optimal classification model based on its superior performance and lower false-negative rate.
7. **Hardware Integration:** Integrates the selected classification logic with the Arduino-based monitoring and control system.
8. **Automated Control:** Activates the exhaust fan and conveyor belt when harmful environmental conditions are detected.
9. **Ammonia Recovery:** Directs extracted ammonia-rich air into an absorption chamber containing distilled water to form ammonium hydroxide.
10. **Real-Time Monitoring:** Displays sensor readings and system status through the LCD for continuous supervision.

## **System Architecture**

The proposed system consists of the following integrated modules:

- **Sensing Module:** Collects ammonia, temperature, food, and water-level information.
- **Processing Module:** Uses Arduino to process sensor readings and coordinate system operations.
- **Machine Learning Module:** Uses QDA classification to identify harmful environmental conditions.
- **Automation Module:** Controls the exhaust fan and conveyor belt based on classification results.
- **Chemical Recovery Module:** Captures ammonia gas and converts it into ammonium hydroxide.
- **Display Module:** Provides real-time information about environmental conditions and system status.

## **Chemical Recovery Process**

The project incorporates an ammonia absorption mechanism to reduce harmful gas emissions.

**Chemical Reaction:**

\\[ NH_3 + H_2O \rightleftharpoons NH_4OH \\]

1. Ammonia-rich air is extracted from the poultry shelter using an exhaust fan.
2. The extracted gas is directed into a sealed collection chamber.
3. Ammonia gas is transferred into an absorption container containing distilled water.
4. Ammonia dissolves in water to form an ammonium hydroxide solution.
5. The resulting solution can be collected for appropriate handling and potential reuse.

This process supports pollution reduction and sustainable waste utilization.

## **Technologies Used**

**Programming and Hardware**

- Arduino
- Embedded C / Arduino Programming

**Machine Learning**

- Python
- Scikit-learn
- Linear Discriminant Analysis (LDA)
- Quadratic Discriminant Analysis (QDA)

**Data Processing**

- Pandas
- NumPy

**Sensors and Automation**

- Ammonia Gas Sensor
- Temperature Sensor
- IR Sensor
- Ultrasonic Sensor
- LCD Display
- DC Geared Motor
- Exhaust Fan
- Conveyor Belt Mechanism

**Model Evaluation**

- Accuracy
- Precision
- Recall
- F1-Score
- Confusion Matrix
- ROC Curve

## **Application Workflow**

1. The sensors continuously collect environmental data from the poultry shelter.
2. The Arduino processes the sensor readings.
3. The collected ammonia and temperature values are passed to the machine learning classification logic.
4. The QDA model classifies the environmental condition as normal or harmful.
5. If harmful conditions are detected, the exhaust fan and conveyor belt are automatically activated.
6. The extracted ammonia gas is directed into the chemical absorption chamber.
7. Ammonia reacts with distilled water to form ammonium hydroxide.
8. The LCD displays real-time sensor readings and system status.
9. The monitoring and automated control process continuously repeats to maintain a healthier poultry environment.

## **Sustainable Development Goals (SDGs)**

- **SDG 3 – Good Health and Well-being:** Improves air quality and reduces harmful ammonia exposure.
- **SDG 9 – Industry, Innovation and Infrastructure:** Integrates IoT, Machine Learning, and automation.
- **SDG 12 – Responsible Consumption and Production:** Promotes sustainable waste management and resource utilization.
- **SDG 13 – Climate Action:** Supports the reduction of harmful gas emissions and environmental pollution.

## **Research Publication**

**Project Title:** Smart Ammonia Monitoring for Sustainable Poultry Farm Management.

**Conference:** 8th International Conference on Inventive Material Science and Applications (ICIMA 2026).

## **Acknowledgement**

This project was developed as an integration of Internet of Things (IoT), Machine Learning, embedded systems, and chemical recovery techniques to improve poultry farm management. It demonstrates how intelligent environmental monitoring and automated waste management can contribute to improved poultry health, operational efficiency, and sustainable agricultural practices.

