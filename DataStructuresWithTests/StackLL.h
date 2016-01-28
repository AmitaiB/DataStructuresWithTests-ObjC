//
//  StackLL;.h
//  DataStructuresWithTests
//
//  Created by Amitai Blickstein on 1/27/16.
//  Copyright © 2016 Amitai Blickstein, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface StackLL : NSObject

-(void)push:(NSInteger)value;
-(NSInteger)pop;
-(NSString *)printStack;

@end
