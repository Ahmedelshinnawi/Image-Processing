# Image Processing Project

This project implements various image processing filters using OpenCV in C++. The filters included in this project are:

- **Gaussian Blur Filter**
- **Box Blur Filter**
- **Median Filter**
- **Sobel Filter**
- **Grayscale Filter**
- **Laplacian Filter**
- **Sharpening Filter**
- **Emboss Filter**
- **Color Filtering**
- **Thresholding**

## Features

- **Gaussian Blur Filter**: Applies a Gaussian blur to an image, reducing noise and detail.
- **Box Blur Filter**: A simple averaging blur that smoothens an image.
- **Median Filter**: Replaces each pixel's value with the median of neighboring pixels to remove noise.
- **Sobel Filter**: Detects edges in an image using Sobel operators in both horizontal and vertical directions.
- **Grayscale Filter**: Converts a color image to grayscale.
- **Laplacian Filter**: Detects edges in an image by calculating the second derivative of pixel intensity.
- **Sharpening Filter**: Enhances the edges and details in an image by applying a kernel to increase contrast.
- **Emboss Filter**: Creates a 3D-like effect by highlighting edges in an image.
- **Color Filtering**: Adjusts the Hue, Saturation, and Value (HSV) channels of the image for color manipulation.
- **Thresholding**: Converts an image to binary by applying a threshold to pixel intensities.

## Installation

### Prerequisites

Ensure that you have the following installed:

- **C++ Compiler (g++ or clang++)**
- **CMake**
- **OpenCV 4.x**

### Steps to Install

1. Clone this repository to your local machine:

   ```bash
   git clone https://github.com/Ahmedelshinnawi/Image-Processing.git
   cd Image-Processing

2. **Create a build directory and navigate into it**:

   First, create a new directory for the build files:

   ```bash
   mkdir build

3. **Run CMake to generate the build files:**:
   ```bash
   cd build

4. **Compile the project**::
   ```bash
   make

5. **Run the program with an image file**:

   ```bash
   ./Image_Processing <path_to_image_file>


  ## Usage
   

1. **Prepare an Image File**: 
   - Place an image file (JPEG, PNG, etc.) in the project directory or provide the absolute path to an image.

      Here's an example of an image being processed:
     
    ![example](https://github.com/user-attachments/assets/2c917f76-2050-4410-9d60-940c3c744ad7)



2. **Run the Program**: 
   - After building the project, run the program with the following command:

     ```bash
     ./Image_Processing <path_to_image_file>
     ```

   - Replace `<path_to_image_file>` with the path to your image file. If the image is in the same directory as the program, you can simply use the file name, e.g., `./Image_Processing image.jpg`.

3. **View the Output**: 
   - The program will apply a series of filters to the image, including Gaussian Blur, Box Blur, Median Filter, Sobel Edge Detection, Grayscale, and others depends on your choice.
   - The processed image will be displayed with the applied effects.

  
