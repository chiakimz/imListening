#include <iostream>
#include <opencv2/opencv.hpp>

int main()
{
    std::cout << "Hello World!\n";
    cv::Mat img = cv::imread("emma.jpg");
    cv::Mat frame;
    cv::VideoCapture cap;
    cap.open(0);
    if (!cap.isOpened())
    {
        std::cout << "Error opening video stream" << std::endl;
        return -1;
    }

    while (1)
    {
        cv::Mat frame;
        cap >> frame;
        if (frame.empty())
            break;
        cv::imshow("frame", frame);
    }
}
