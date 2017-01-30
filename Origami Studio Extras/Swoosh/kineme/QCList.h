#import <GFList.h>

@interface QCList : GFList
{
}

+ (BOOL)accessInstanceVariablesDirectly;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)fp8;
- (void)setObject:(id)object forKey:(id)key;
- (void)insertObject:(id)object atIndex:(unsigned int)index forKey:(id)key;
- (void)removeObjectAtIndex:(unsigned int)index;
- (void)removeAllObjects;
- (id)valueForKey:(id)key;

@end

