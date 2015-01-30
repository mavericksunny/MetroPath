//
//  MetroStation.m
//  MarsMetro
//
//  Created by Sunny on 31/03/14.
//  Copyright (c) 2014 Amendeep Singh. All rights reserved.
//

#import "MetroStation.h"

@implementation MetroStation
@synthesize stationID;
@synthesize title;
@synthesize lineColor;
@synthesize endPointOne;
@synthesize endPointTwo;
@synthesize isSwitch;
@synthesize isStationClosed;
@synthesize closedReason;
#pragma mark Class Method Initializer
+ (MetroStation *)stationWithIdentifier:(NSString *)identifier color:(NSString*)lineColor {
    
    MetroStation *station = [[MetroStation alloc] init];
    
    station.stationID = identifier;
    station.lineColor = lineColor;
    return station;
}


@end
