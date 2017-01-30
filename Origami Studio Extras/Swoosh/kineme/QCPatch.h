#import "GFGraph.h"
#import "QCContext.h"

@class QCPatchRuntime, QCPort, QCBooleanPort, QCNumberPort;

@interface QCPatch : GFGraph
{
    QCPatchRuntime *_executionRuntime;
    int _executionMode;
    unsigned int _executionFlags;
    QCContext *_executionContext;
    int _timebase;
    QCBooleanPort *_enableInput;
    QCNumberPort *_timeInput;
    BOOL _enabled;
    unsigned int _activeCount;
    double _lastExecutionTime;
    unsigned int _lastExecutionFrame;
    double _activationTime;
    void *_observationInfo;
    void *unused3[4];
}

+ (BOOL)accessInstanceVariablesDirectly;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)fp8;
- (id)consumerSubpatches;
- (void)setOrder:(unsigned int)fp8 forConsumerSubpatch:(id)fp12;
- (unsigned int)orderForConsumerSubpatch:(id)fp8;
- (void)setTimebase:(int)fp8;
- (int)timebase;
- (id)systemInputPorts;
- (id)systemOutputPorts;
@end

@interface QCPatch (Registry)
+ (id)patchManager;
+ (id)patchNames;
+ (id)patchWithName:(id)fp8;
+ (id)patchAttributesWithName:(id)fp8;
+ (void)loadPlugInAtPath:(id)fp8;
+ (void)loadPlugInsInFolder:(id)fp8;
+ (void)loadPlugInsInLibrary:(id)fp8;
@end

@interface QCPatch (Private)
+ (Class)_baseClass;
- (id)_executionRuntime;
- (id)_executionContext;
- (int)_executionMode;
- (id)_enableInput;
- (void)_invalidateExecutionMode;
- (void)_setTimebase:(int)fp8;
- (void)_invalidateTimeMode;
- (unsigned int)_activeCount;
- (BOOL)_setup:(id)fp8 runtime:(id)fp12;
- (void)_enable;
- (void)_activate;
- (BOOL)_execute:(double)fp8 arguments:(id)fp16;
- (void)_deactivate;
- (void)_disable;
- (void)_cleanup;
- (int)_executionFlags;
- (void)_setNeedsExecution;
- (void)_setForceExecuteProcessors;
- (id)_safeURLWithString:(id)fp8;
@end

@interface QCPatch (Customization)
+ (int)executionMode;
+ (int)executionModeWithIdentifier:(id)fp8;
+ (BOOL)allowsSubpatches;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
+ (int)timeMode;
+ (int)timeModeWithIdentifier:(id)fp8;
- (BOOL)isOutput:(id)fp8 dependentFromInput:(id)fp12;
- (void)receiveMessage:(id)fp8 name:(id)fp12 attributes:(id)fp16;
- (id)setup:(id)fp8;
- (void)enable:(id)fp8;
- (BOOL)execute:(id)fp8 time:(double)fp12 arguments:(id)fp20;
- (void)disable:(id)fp8;
- (void)cleanup:(id)fp8;
@end

@interface QCPatch (Execution)
- (BOOL)executeSubpatches:(double)fp8 arguments:(id)fp16;
@end

@interface QCPatch (Override)
+ (Class)_proxyClass;
+ (Class)_listClass;
+ (id)_keyFromName:(id)fp8;
- (id)attributes;
- (id)_baseKey;
- (void)_logMessage:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (void)finalize;
- (void)dealloc;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (id)copyWithZone:(NSZone *)fp8;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;
- (void)stateUpdated;
- (id)createInputPortWithArguments:(id)fp8 forKey:(id)fp12;
- (id)createOutputPortWithArguments:(id)fp8 forKey:(id)fp12;
- (BOOL)canAddNode:(id)fp8;
- (BOOL)addNode:(id)fp8 forKey:(id)fp12;
- (void)removeNodeForKey:(id)fp8;
- (BOOL)_detectClosedLoopFromPort:(id)fp8 toPort:(id)fp12;
- (BOOL)canConnectPort:(id)fp8 toPort:(QCPort*)destPort;
- (id)argumentsForConnectionFromPort:(id)fp8 toPort:(id)fp12;
- (id)createConnectionFromPort:(id)fp8 toPort:(id)fp12 forKey:(id)fp16;
- (void)deleteConnectionForKey:(id)fp8;
- (id)createProxyPortWithOriginalPort:(id)fp8 forKey:(id)fp12;
- (void)deleteProxyPortForKey:(id)fp8;
- (void)deleteInputPortForKey:(id)fp8;
- (void)deleteOutputPortForKey:(id)fp8;
- (int)directionForPort:(id)fp8;
- (id)valueForKey:(id)fp8;
- (id)customInputPorts;
- (id)customOutputPorts;
- (void)setObservationInfo:(void *)fp8;
- (void *)observationInfo;
@end

@interface QCPatch (Wrappers)
- (id)inputs;
- (id)outputs;
- (id)ivarInputs;
- (id)ivarOutputs;
- (id)customInputs;
- (id)customOutputs;
- (id)systemInputs;
- (id)systemOutputs;
- (id)createInputWithPortClass:(Class)fp8 forKey:(id)fp12 attributes:(id)fp16;
- (id)createInputWithPortClass:(Class)fp8 forKey:(id)fp12 attributes:(id)fp16 arguments:(id)fp20;
- (id)createOutputWithPortClass:(Class)fp8 forKey:(id)fp12 attributes:(id)fp16;
- (id)createOutputWithPortClass:(Class)fp8 forKey:(id)fp12 attributes:(id)fp16 arguments:(id)fp20;
- (void)deleteInputForKey:(id)fp8;
- (void)deleteOutputForKey:(id)fp8;
- (id)inputForKey:(id)fp8;
- (id)keyForInput:(id)fp8;
- (id)outputForKey:(id)fp8;
- (id)keyForOutput:(id)fp8;
- (id)parentPatch;
- (id)subpatches;
- (BOOL)canAddSubpatch:(id)fp8;
- (BOOL)addSubpatch:(id)fp8 forKey:(id)fp12;
- (void)removeSubpatchForKey:(id)fp8;
- (id)subpatchForKey:(id)fp8;
- (id)keyForSubpatch:(id)fp8;
- (id)pathForSubpatch:(id)fp8;
- (id)subpatchForPath:(id)fp8;
- (BOOL)canLinkOutput:(id)fp8 toInput:(id)fp12;
- (id)createLinkFromOutput:(id)fp8 toInput:(id)fp12 forKey:(id)fp16;
- (void)deleteLinkForKey:(id)fp8;
- (id)links;
- (id)linkForKey:(id)fp8;
- (id)keyForLink:(id)fp8;
- (BOOL)canPublishInput:(id)fp8;
- (BOOL)canPublishOutput:(id)fp8;
- (id)publishInput:(id)fp8 forKey:(id)fp12;
- (id)publishOutput:(id)fp8 forKey:(id)fp12;
- (void)unpublishInput:(id)fp8;
- (void)unpublishOutput:(id)fp8;
- (id)isInputPublished:(id)fp8;
- (id)isOutputPublished:(id)fp8;
- (id)pathForInput:(id)fp8;
- (id)inputForPath:(id)fp8;
- (id)pathForOutput:(id)fp8;
- (id)outputForPath:(id)fp8;
@end

@interface QCPatch (QCNodeManager)
+ (id)_privateAttributesWithIdentifier:(id)fp8;
@end

@interface QCPatch (Runtime)
- (void)_sendMessage:(id)fp8 attributes:(id)fp12;
- (void)broadcastMessage:(id)fp8 attributes:(id)fp12;
- (BOOL)startRendering:(id)fp8 options:(id)fp12;
- (BOOL)render:(double)fp8 arguments:(id)fp16;
- (void)stopRendering;
- (BOOL)isRendering;
@end

@interface QCPatch (QCPatchView)
- (id)nodeActorForView:(id)fp8;
- (Class)graphViewClass;
@end

@interface QCPatch (File)
+ (BOOL)canInstantiateWithFile:(id)fp8;
+ (id)instantiateWithFile:(id)fp8;
@end

@interface QCPatch (GLError)
- (BOOL)checkForGLError;
@end
