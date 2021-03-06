//
//  StackArr.h
//  DataStructuresWithTests
//
//  Created by Amitai Blickstein on 1/28/16.
//  Copyright © 2016 Amitai Blickstein, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface StackArr : NSObject

-(void)push:(NSInteger)value;
-(NSInteger)pop;
-(NSInteger)peek;
-(void)removeAll;
-(BOOL)isEmpty;


-(NSString *)printStack;
-(NSInteger)indexOfValue:(NSInteger)aValue;
-(BOOL)containsValue:(NSInteger)aValue;


@end
