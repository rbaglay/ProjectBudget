//
//  AppDelegate.h
//  ProjectBudget
//
//  Created by Roman Baglay on 14.02.17.
//  Copyright © 2017 Roman Baglay. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

