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

-(NSString *)printList;
-(BOOL)isEmpty;
-(void)addToFront:(NSInteger)valueToAdd;
-(void)addToBack:(NSInteger)valueToAdd;
-(void)removeFromFront;
-(void)removeFromBack;
-(void)removeAll;

-(NSInteger)indexOfValue:(NSInteger)aValue;
-(BOOL)containsValue:(NSInteger)aValue;


//-(Node*)shift;
//-(Node*)pop;


@end
