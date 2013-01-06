////////////////////////////////////////////////////////////////////////////////
//
//  JASPER BLUES
//  Copyright 2012 - 2013 Jasper Blues
//  All Rights Reserved.
//
//  NOTICE: Jasper Blues permits you to use, modify, and distribute this file
//  in accordance with the terms of the license agreement accompanying it.
//
////////////////////////////////////////////////////////////////////////////////



#import <Foundation/Foundation.h>
#import "PFWeatherClient.h"

@protocol PFCityDao;
@protocol PFWeatherClient;


@interface PFAddCityViewController : UIViewController<UITextFieldDelegate, PFWeatherClientDelegate>  {

    id<PFCityDao> _cityDao;
    id<PFWeatherClient> _weatherClient;
}

@property (nonatomic, weak) IBOutlet UITextField* nameOfCityToAdd;
@property (nonatomic, weak) IBOutlet UIBarButtonItem* doneButton;
@property (nonatomic, weak) IBOutlet UILabel* validationMessage;
@property (nonatomic, weak) IBOutlet UIActivityIndicatorView* spinner;

@end