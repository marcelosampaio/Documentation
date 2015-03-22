//
//  ViewController.h
//  Documentation
//
//  Created by Marcelo Sampaio on 3/22/15.
//  Copyright (c) 2015 Marcelo Sampaio. All rights reserved.
//

#import <UIKit/UIKit.h>

/*!
 @class ViewController
 
 @brief This is the header file where my super-code is contained.
 
 This file contains the most important method and properties declaration. It's parted by two methods in total, which can be used to perform temperature conversions.
 
 @author Marcelo Sampaio
 
 @copyright (c) 2015 Marcelo Sampaio
 
 @version 1.0.0
 
 */
@interface ViewController : UIViewController

/*! @brief This property knows my name */
@property (nonatomic,strong) NSString *myName;


-(float)toCelsius:(float)fromFahrenheit;

@end

