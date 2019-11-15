//
//  NSArray+CWAdd.m
//  FBSnapshotTestCase
//
//  Created by JackChen on 2019/11/15.
//

#import "NSArray+CWAdd.h"

@implementation NSArray (CWAdd)
- (id)objectOrNilAtIndex:(NSUInteger)index {
    return index < self.count ? self[index] : nil;
}
@end

@implementation NSMutableArray (CWAdd)
- (void)reverse {
    NSUInteger count = self.count;
    int mid = floor(count / 2.0);
    for (NSUInteger i = 0; i < mid; i++) {
        [self exchangeObjectAtIndex:i withObjectAtIndex:(count - (i + 1))];
    }
}

- (void)shuffle {
    for (NSUInteger i = self.count; i > 1; i--) {
        [self exchangeObjectAtIndex:(i - 1)
                  withObjectAtIndex:arc4random_uniform((u_int32_t)i)];
    }
}
@end
