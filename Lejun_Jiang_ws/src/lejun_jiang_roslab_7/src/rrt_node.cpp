// RRT and RRT star implementation
// Author: Lejun Jiang, Hongrui Zheng

// This file contains the node definition for RRT
// Reference: https://arxiv.org/pdf/1105.1186.pdf

#include "lejun_jiang_roslab_7/rrt.h"

int main(int argc, char** argv) {
    ros::init(argc, argv, "rrt");
    ros::NodeHandle nh;
    RRT rrt(nh, RRT_type::RRT_star);  // specify here to run RRT or RRT*
    ros::spin();
    return 0;
}
