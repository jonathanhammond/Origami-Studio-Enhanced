#import "QCProtocols.h"
#import "GFList.h"

@class GFGraph;

@interface GFNode : NSObject <GFNode, NSCoding, NSCopying, GFState>
{
    GFList *_inputPorts;
    GFList *_outputPorts;
    GFGraph *_parent;
    unsigned int _flags;
    NSString *_identifier;
    NSMutableDictionary *_userInfo;
    unsigned int _notificationsDisabled;
    unsigned int _notificationsPaused;
    GFList *_notificationsQueue;
    void *unused[4];
}

+ (void)initialize;
+ (id)xmlAttributesWithIdentifier:(id)fp8;
+ (id)attributesWithIdentifier:(id)fp8;
+ (unsigned int)stateVersion;
+ (unsigned int)stateVersionWithIdentifier:(id)fp8;
+ (BOOL)createIvarPorts;
+ (id)nodeWithIdentifier:(id)fp8;
- (unsigned int)versionFromState:(id)fp8;
- (id)init;
- (void)__setValue:(id)fp8 forIvar:(const char *)fp12;
- (id)initWithIdentifier:(id)fp8;
- (void)_finalize_GFNode;
- (void)finalize;
- (void)dealloc;
- (id)identifier;
- (id)argumentsForIvarPortWithKey:(id)key;
- (id)createInputPortWithArguments:(id)fp8 forKey:(id)key;
- (id)createOutputPortWithArguments:(id)fp8 forKey:(id)key;
- (void)deleteInputPortForKey:(id)key;
- (void)deleteOutputPortForKey:(id)key;
- (NSMutableDictionary*)userInfo;
- (GFList*)inputPorts;
- (GFList*)outputPorts;
- (id)ivarInputPorts;
- (id)ivarOutputPorts;
- (id)customInputPorts;
- (id)customOutputPorts;
- (BOOL)saveCustomInputPortStates:(id)fp8 toState:(id)fp12;
- (BOOL)saveCustomOutputPortStates:(id)fp8 toState:(id)fp12;
- (BOOL)restoreCustomInputPortStates:(id)fp8 fromState:(id)fp12;
- (BOOL)restoreCustomOutputPortStates:(id)fp8 fromState:(id)fp12;
- (id)xmlAttributes;
- (id)attributes;
- (id)description;
- (id)state;
- (BOOL)setState:(id)fp8;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (id)copyWithZone:(NSZone *)fp8;
- (id)portForKey:(id)fp8;
- (id)keyForPort:(id)fp8;
- (int)directionForPort:(id)fp8;
- (GFGraph*)graph;
- (void)pauseNotifications;
- (void)resumeNotifications;
- (void)stateUpdated;
- (void)logMessage:(id)fp8;
- (void)debugMessage:(id)fp8;
- (id)key;
- (void)nodeDidAddToGraph:(id)fp8;
- (void)nodeWillRemoveFromGraph;
@end

@interface GFNode (Private)
+ (Class)_baseClass;
+ (Class)_listClass;
+ (id)_keyFromName:(id)fp8;
- (void)disableNotifications;
- (void)enableNotifications;
- (id)debugPath;
- (void)_logMessage:(id)fp8;
- (id)_inputPorts;
- (id)_outputPorts;
- (id)_baseKey;
- (BOOL)_isKeyInUse:(id)fp8;
- (id)_uniqueInputPortKey;
- (id)_uniqueOutputPortKey;
- (void)_portsUpdated;
- (void)_postNotification:(id)fp8 sender:(id)fp12;
- (id)_stateForPorts:(id)fp8;
- (BOOL)_setState:(id)fp8 forPorts:(id)fp12;
- (id)_portsFromList:(id)fp8 withSetFlags:(unsigned int)fp12 unsetFlags:(unsigned int)fp16;
- (NSMutableDictionary*)_userInfo;
@end

