//
//  MetroPathEngine.h
//  MarsMetro
//
//  Created by Sunny on 31/03/14.
//  Copyright (c) 2014 Amendeep Singh. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MetroMap.h"
#import "MetroPath/MetroRoute.h"

/**
 Class which is responsible for creating a metro map layout */
@interface MetroPathEngine : NSObject {


}
/**
 the instance of the MetroMap class which will perform the heavy lifting and all core calculations
 */
@property(nonatomic,strong)     MetroMap *map;
/**
 we keep the list of stations publically accessible for another class
 */
@property(nonatomic,strong) NSDictionary *stationDict;

/**
 Method which allocates and initializes the singleton instance of this class.
 */
+ (id)sharedEngine;

/**
 Method which creates the map layout
 */
-(void)createMetroMapLayout;
-(MetroRoute*)calculateRouteBetweenStation:(NSString*)fromStationID toStation:(NSString*)toStationID;
@end
