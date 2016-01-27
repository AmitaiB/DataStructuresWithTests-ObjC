//
//  LinkedList.h
//  DataStructures
//
//  Created by Amitai Blickstein on 1/26/16.
//  Copyright © 2016 Amitai Blickstein, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Node.h"

@interface LinkedList : NSObject

@property (nonatomic, strong) Node *head;
@property (nonatomic, strong) Node *tail;
@property (nonatomic) NSInteger count;

-(void)printList;
-(BOOL)isEmpty;
-(void)addToFront:(id)valueToAdd;
-(void)addToBack:(id)valueToAdd;
-(void)removeFromFront;
-(void)removeFromBack;
-(void)removeAll;
//-(Node*)shift;
//-(Node*)pop;


@end
