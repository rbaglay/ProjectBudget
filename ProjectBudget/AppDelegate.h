//
//  AppDelegate.h
//  ProjectBudget
//
//  Created by Roman Baglay on 14.02.17.
//  Copyright © 2017 Roman Baglay. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>


@class A0Lock;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;
    
@property (readonly, nonatomic) A0Lock *lock;
+ (AppDelegate *)sharedInstance;

- (void)saveContext;


@end

