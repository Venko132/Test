//
//  _AppDelegate.h
//  11
//
//  Created by Vasya on 11.11.13.
//  Copyright (c) 2013 Vasya. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface _AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
