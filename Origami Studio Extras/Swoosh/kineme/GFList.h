@interface GFList : NSObject
{
    unsigned int	_flags;
    unsigned int	_capacity;
    unsigned int	_count;
//    id 			*_values;
    unsigned int	*_hashValues;
 //   id 			*_keys;
    unsigned int	*_hashKeys;
}

+ (id) list;
- (id) init;
- (id) initWithCapacity:(unsigned int)capacity;
- (id) initWithCapacity:(unsigned int)capacity optionFlags:(unsigned int)fp12;
- (void) _finalize_GFList;
- (void) finalize;
- (void) dealloc;
- (unsigned int) count;
- (void) setObject:(id)object forKey:(id)key;
- (void) insertObject:(id)object atIndex:(unsigned int)index forKey:(id)key;
- (void) addObject:(id)object forKey:(id)key;
- (void) addEntriesFromList:(GFList*)list;
- (void) addEntriesFromDictionary:(NSDictionary*)dict;
- (void) removeAllObjects;
- (void) removeObject:(id)object;
- (void) removeObjectForKey:(id)key;
- (void) removeObjectAtIndex:(unsigned int)index;
- (id) objectForKey:(id)key;
- (id) keyForObject:(id)object;
- (id) objectAtIndex:(unsigned int)index;
- (unsigned int) indexOfObject:(id)object;
- (id) keyAtIndex:(unsigned int)index;
- (unsigned int) indexOfKey:(id)key;
- (NSString*) description;
- (NSArray*) arrayOfKeys;
- (NSArray*) arrayOfObjects;
- (NSArray*) setOfObjects;
- (id) setOfKeys;
- (NSDictionary*) dictionary;
- (NSArray*) array;
- (void) _moveIndex:(unsigned int)fp8 toIndex:(unsigned int)fp12;
- (void) setIndex:(unsigned int)fp8 ofObject:(id)fp12;
- (void) _swapIndex:(unsigned int)fp8 withIndex:(unsigned int)fp12;
- (void) makeObjectsPerformSelector:(SEL)selector;
- (void) makeObjectsPerformSelector:(SEL)selector withObject:(id)fp12;
- (void) sortUsingFunction:(void *)fp8 context:(void *)fp12;
- (void) applyFunction:(void *)fp8 context:(void *)fp12;
- (const id *) _values;
- (const id *) _keys;

@end

