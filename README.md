# Waste-Segregation
This project employs various machine learning models to classify waste into three categories: **biodegradable**, **non-biodegradable**, and **others**. We tested multiple deep learning models and evaluated their performance on training, validation, and test data to identify the most effective architecture for accurate waste classification.

## Table of Contents

- [Overview](#overview)
- [Models Tested](#models-tested)
- [Dataset](#dataset)
- [Training Process](#training-process)
- [Results](#results)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Overview

The waste segregation dustbin automates the process of sorting waste using machine learning models. These models analyze input images of waste items and classify them into predefined categories. This solution integrates machine learning with hardware to enhance the efficiency of waste management.

## Models Tested

To find the best model, the following architectures were tested:

- **DenseNet121**
- **NASNetMobile**
- **MobileNetV2**
- **Xception**
- **ResNet50**
- **EfficientNetB0**
- **VGG16**
- **ResNet152**
- **InceptionV3**

Each model was evaluated based on its training, validation, and test accuracy to determine its suitability for real-time waste classification.

## Dataset

The dataset contains labeled images of waste classified into the three categories: **biodegradable**, **non-biodegradable**, and **others**.

You can find the dataset used for this project at the following link:

[Dataset Link](#https://www.kaggle.com/datasets/sapal6/waste-classification-data-v2)

## Training Process

Each model was trained on the dataset using the following steps:

1. **Data Preprocessing:**
   - Image resizing and normalization.
   - Data augmentation techniques like flipping, rotation, and zooming were applied to improve generalization.
   
2. **Model Training:**
   - Pre-trained weights were used for transfer learning, and the models were fine-tuned for multiple epochs using Adam optimizer and categorical cross-entropy loss.
   
3. **Evaluation:**
   - Each model's performance was assessed using validation and test datasets. The models with the best balance of accuracy and computational efficiency were saved for deployment.

## Results

The following table summarizes the performance of each model after 10 to 20 epochs of training:

| Serial No. | Model          | Epochs | Train Accuracy | Val Accuracy | Test Accuracy |
|------------|----------------|--------|----------------|--------------|---------------|
| 1          | DenseNet121     | 10     | 94.32%         | 77.12%       | 77.12%        |
| 2          | NASNetMobile    | 10     | 92.71%         | 77.23%       | 77.23%        |
| 3          | MobileNetV2     | 10     | 94.89%         | 75.09%       | 75.09%        |
| 4          | Xception        | 10     | 93.95%         | 73.68%       | 73.68%        |
| 5          | ResNet50        | 10     | 67.60%         | 63.88%       | 61.64%        |
| 6          | EfficientNetB0  | 10     | 55.69%         | 48.19%       | 48.19%        |
| 7          | VGG16           | 20     | 94.30%         | 86.34%       | 81.16%        |
| 8          | ResNet152       | 20     | 83.54%         | 86.34%       | 81.77%        |
| 9          | InceptionV3     | 20     | 78.35%         | 81.16%       | 81.16%        |

Key observations:
- **VGG16** and **ResNet152** achieved the highest validation and test accuracy (~86%).
- **DenseNet121** and **NASNetMobile** provided good results with slightly lower accuracy but more efficient training.
- **EfficientNetB0** showed lower accuracy but may be suitable for systems where computational efficiency is prioritized over accuracy.

## Usage

To use the models for waste classification:

1. Clone this repository:
   ```bash
   git clone https://github.com/cyber-geek0825/Waste-Segregation.git
