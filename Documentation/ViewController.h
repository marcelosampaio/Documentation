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

/*!
 @typedef wheatherConditionsInDays
 
 @brief A struct about the weather.
 
 @discussion
 The value of this structure represent how many sunny, cloudy, rainy and snowed days existed over the last year.
 
 @field <b>sun</b> - Good weather!<br>
 @field <b>clouds</b> - Where's the sun?<br>
 @field <b>rain</b> - Get an umbrella!<br>
 @field <b>snow</b> - Snowball is coming!<br>
 
 */
typedef struct {
    /*! Good weather */
    int sun;
    /*!  Where's the sun? */
    int clouds;
    /*! Get an umbrella! */
    int rain;
    /*! Snowball is coming! */
    int snow;
} wheatherConditionsInDays;


@interface ViewController : UIViewController

/*! @brief This property knows my name */
@property (nonatomic,strong) NSString *myName;









-(float)toCelsius:(float)fromFahrenheit;

@end

