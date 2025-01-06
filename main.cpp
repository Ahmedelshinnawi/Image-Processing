#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
int main() {
    
    cv::Mat image = cv::imread("1.jpg");
    if (image.empty()) {
        std::cerr << "Error: Could not load image!" << std::endl;
        return -1;
    }


    cout << "Choose filter to apply \n";
    cout << "1: Gaussian Blur Filter \n";
    cout << "2: Box Blur Filter \n";
    cout << "3: Median Filter \n";
    cout << "4: Sobel Filter \n";
    cout << "5: Grayscale Filter \n";
    cout << "6: Laplacian Filter \n";
    cout << "7: Sharpening Filter \n";
    cout << "8: Emboss Filter \n";
    cout << "9: Color Filtering \n";
    cout << "10: Thresholding:";
    int choice;
    cin >> choice;

    if (choice == 1)
    {
        cv::imshow("Original Image", image);

        cv::Mat gaussianImage;
        int kernelSize = 19;
        cv::GaussianBlur(image, gaussianImage, cv::Size(kernelSize, kernelSize), 0);

        cv::imshow("Blurred Image", gaussianImage);

        cv::imwrite("Gaussian_blurred_image.jpg", gaussianImage);

        cv::waitKey(0);
    }

    else if (choice == 2)
    {
        cv::imshow("Original Image", image);

        cv::Mat blurredImage;
        cv::blur(image, blurredImage, cv::Size(5, 5));

        cv::imshow("Blurred Image", blurredImage);

        cv::imwrite("blurred_image.jpg", blurredImage);

        cv::waitKey(0);
    }

    else if (choice == 3)
    {
        cv::imshow("Original Image", image);

        cv::Mat medianImage;
        cv::medianBlur(image, medianImage, 5);

        cv::imshow("Median Filter Image", medianImage);

        cv::imwrite("median_image.jpg", medianImage);

        cv::waitKey(0);
    }

    else if (choice == 4)
    {
        cv::imshow("Original Image", image);

        cv::Mat sobelImage;
        cv::Sobel(image, sobelImage, CV_64F, 1, 0); // X-gradient

        cv::imshow("Median Filter Image", sobelImage);

        cv::imwrite("sobel_image.jpg", sobelImage);

        cv::waitKey(0);
    }

    else if (choice == 5)
    {
        cv::imshow("Original Image", image);

        cv::Mat grayScaleImage;
        cv::cvtColor(image, grayScaleImage, cv::COLOR_BGR2GRAY);

        cv::imshow("Grayscale Image", grayScaleImage);

        cv::imwrite("greyScale_image.jpg", grayScaleImage);

        cv::waitKey(0);
    }

    else if (choice == 6)
    {
        cv::imshow("Original Image", image);

        cv::Mat laplacianImage;
        cv::Laplacian(image, laplacianImage, CV_16S, 3, 1, 0, cv::BORDER_DEFAULT);

        cv::imshow("Laplacian Filter Image", laplacianImage);

        cv::imwrite("laplacian_image.jpg", laplacianImage);


        cv::waitKey(0);
    }

    else if (choice == 7)
    {
        cv::imshow("Original Image", image);

        cv::Mat sharpImage;
        cv:: Mat kernel = (cv::Mat_<float>(3,3) <<
             0, -1, 0,
             -1, 5, -1,
             0, -1, 0);

        cv::filter2D(image, sharpImage, image.depth(), kernel);

        cv::imshow("Sharpening Filter Image", sharpImage);

        cv::imwrite("sharp.jpg", sharpImage);

        cv::waitKey(0);
    }
    else if (choice == 8)
    {
        cv::imshow("Original Image", image);

        cv::Mat embossImage;
        cv:: Mat kernel = (cv::Mat_<float>(3,3) <<
            -2, -1, 0,
            -1, 1, 1,
            0, 1, 2);

        cv::filter2D(image, embossImage, image.depth(), kernel);

        cv::imshow("Emboss Filter Image", embossImage);


        cv::imwrite("emboss_image.jpg", embossImage);

        cv::waitKey(0);
    }

    else if (choice == 9)
    {
        cv::imshow("Original Image", image);

        cv::Mat hsv;
        cv::cvtColor(image, hsv, cv::COLOR_BGR2HSV);

        vector<cv::Mat> channels(3);
        cv::split(hsv, channels);
        channels[0] += 25;
        channels[1] += 75;
        channels[2] -= 45;

        cv::merge(channels, hsv);

        cv:: Mat coloredImage;
        cv::cvtColor(hsv, coloredImage, cv::COLOR_HSV2BGR);

        cv::imshow("Colored Image", coloredImage);

        cv::imwrite("colored_image.jpg", coloredImage);

        cv::waitKey(0);
    }

    else if (choice == 10)
    {
        cv::imshow("Original Image", image);

        cv::Mat thresholdingImage;
        cv::threshold(image, thresholdingImage, 128, 255, cv::THRESH_BINARY);

        cv::imshow("Thresholding Image", thresholdingImage);

        cv::imwrite("thresholding_image.jpg", thresholdingImage);

        cv::waitKey(0);
    }

    else
    {
        cerr << "Error: Invalid Option";
    }
    return 0;
}
