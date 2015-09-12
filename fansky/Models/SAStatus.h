//
//  SAStatus.h
//  fansky
//
//  Created by Zzy on 9/12/15.
//  Copyright (c) 2015 Zzy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class SAPhoto, SAUser;

@interface SAStatus : NSManagedObject

@property (nonatomic, retain) NSDate * createdAt;
@property (nonatomic, retain) NSString * statusID;
@property (nonatomic, retain) NSString * text;
@property (nonatomic, retain) NSString * source;
@property (nonatomic, retain) SAUser *user;
@property (nonatomic, retain) SAPhoto *photo;
@property (nonatomic, retain) SAUser *localUser;

@end
