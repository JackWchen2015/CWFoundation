//
//  NSArray+CWAdd.h
//  FBSnapshotTestCase
//
//  Created by JackChen on 2019/11/15.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSArray<__covariant ObjectType> (CWAdd)
- (nullable ObjectType)objectOrNilAtIndex:(NSUInteger)index;
@end


@interface NSMutableArray<ObjectType> (CWAdd)
/**
 Reverse the index of object in this array.
 Example: Before @[ @1, @2, @3 ], After @[ @3, @2, @1 ].
 */
- (void)reverse;

/**
 Sort the object in this array randomly.
 */
- (void)shuffle;
@end
NS_ASSUME_NONNULL_END
