//
//  TreeNode.h
//  DataStructuresWithTests
//
//  Created by Amitai Blickstein on 1/31/16.
//  Copyright © 2016 Amitai Blickstein, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TreeNode : NSObject

@property (nonatomic) NSInteger value;
@property (nonatomic, strong) TreeNode *parent;
@property (nonatomic, strong) NSMutableSet *children;

-(instancetype)initWithValue:(NSInteger)aValue;


@end
