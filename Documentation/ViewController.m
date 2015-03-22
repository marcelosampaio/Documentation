//
//  ViewController.m
//  Documentation
//
//  Created by Marcelo Sampaio on 3/22/15.
//  Copyright (c) 2015 Marcelo Sampaio. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()



@end

@implementation ViewController
@synthesize myName;

- (void)viewDidLoad {
    [super viewDidLoad];
    NSLog(@"Initial Commit    name=%@",self.myName);

}

#pragma mark - Conversions
/*!
 @brief It converts temperature degrees from Fahrenheit to Celsius scale.
 
 @discussion This method accepts a float value representing the temperature in <b>Fahrenheit</b> scale and it converts to the <b>Celsius</b> scale. 
 
 @code
    float f = [self toCelcius:50];
 @endcode
 
 @remark This is a super-easy method.
 
 @param fromFahrenheit The input value representing the degrees in th Fahrenheit scale.
 
 @return float The degree in the Celsius scale.
 */
-(float)toCelsius:(float)fromFahrenheit {
    return 0.0f;
}
@end
