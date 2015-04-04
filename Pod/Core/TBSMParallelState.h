//
//  TBSMParallelState.h
//  TBStateMachine
//
//  Created by Julian Krumow on 16.06.14.
//  Copyright (c) 2014-2015 Julian Krumow. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "TBSMState.h"
#import "TBSMContainingNode.h"

/**
 *  This class wraps multiple `TBSMStateMachine` instances to an orthogonal region.
 */
@interface TBSMParallelState : TBSMState <TBSMContainingNode>

/**
 *  Creates a `TBSMParallelState` instance from a given name.
 *
 *  Throws an exception when name is nil or an empty string.
 *
 *  @param name The specified parallel wrapper name.
 *
 *  @return The parallel wrapper instance.
 */
+ (TBSMParallelState *)parallelStateWithName:(NSString *)name;

/**
 *  Initializes a `TBSMParallelState` with a specified name.
 *
 *  Throws an exception when name is nil or an empty string.
 *
 *  @param name The name of this wrapper. Must be unique.
 *
 *  @return An initialized `TBSMParallelState` instance.
 */
- (instancetype)initWithName:(NSString *)name;

/**
 *  Returns the state machines the parallel wrapper manages.
 *
 *  @return An NSArray containing all `TBSMStateMachine` instances.
 */
- (NSArray *)stateMachines;

/**
 *  Sets the `TBSMStateMachine` instances to wrap.
 *
 *  Throws `TBSMException` if the instances are not of type `TBSMStateMachine`.
 *
 *  @param stateMachines An array of `TBSMStateMachine` instances.
 */
- (void)setStateMachines:(NSArray *)stateMachines;

@end