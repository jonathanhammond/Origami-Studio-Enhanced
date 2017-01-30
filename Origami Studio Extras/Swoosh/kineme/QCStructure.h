#import <QCObject.h>
#import <GFList.h>

@interface QCStructure : QCObject
{
    GFList *_list;
    void *unused[4];
}

- (id)initWithDictionary:(id)fp8;
- (id)initWithArray:(id)fp8;
- (id)initWithMembers:(id)fp8 keyPrefix:(id)fp12;
- (id)initWithMembersAndKeys:(id)fp8;
- (id)initWithMembers:(id *)fp8 forKeys:(id *)fp12 count:(unsigned int)fp16;
- (id)init;
- (void)dealloc;
- (unsigned int)count;
- (id)memberForKey:(id)fp8;
- (id)memberAtIndex:(unsigned int)fp8;
- (id)keyAtIndex:(unsigned int)fp8;
- (void)setMember:(id)fp8 forKey:(id)fp12;
- (void)removeMemberForKey:(id)fp8;
- (void)removeAllMembers;
- (id)stateValue;
- (id)initWithStateValue:(id)fp8;
- (id)_list;
@end

@interface QCStructure (Override)
+ (Class)valueClass;
- (id)value;
- (id)description;
@end

