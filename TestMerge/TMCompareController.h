//
//  TMCompareController.h
//  TestMerge
//
//  Created by Barry Wark on 5/27/09.
//  Copyright 2009 Physion Consulting LLC. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface TMCompareController : NSViewController {

}

- (IBAction)selectReference:(id)sender;
- (IBAction)selectOutput:(id)sender;

- (BOOL)validateUserInterfaceItem:(id < NSValidatedUserInterfaceItem >)anItem;
@end
