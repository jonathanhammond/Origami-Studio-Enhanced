@interface QCObject : NSObject <NSCoding, NSCopying>
{
    unsigned int _timestamp;
    void *_observationInfo;
}

+ (BOOL)accessInstanceVariablesDirectly;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)fp8;
+ (id)allocWithZone:(NSZone *)fp8;
+ (Class)valueClass;
- (id)value;
- (unsigned int)_timestamp;
- (void)_updateTimestamp;
- (void)willChange;
- (void)didChange;
- (id)description;
- (id)valueForKey:(id)fp8;
- (id)stateValue;
- (id)initWithStateValue:(id)fp8;
- (void)setObservationInfo:(void *)fp8;
- (void *)observationInfo;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (id)copyWithZone:(NSZone *)fp8;
@end
