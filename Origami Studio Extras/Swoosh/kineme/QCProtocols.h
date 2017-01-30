// Need this for CGLContextObj
#import <OpenGL/OpenGL.h>

@protocol GFConnection <NSObject>
- (id)sourcePort;
- (id)destinationPort;
- (id)attributes;
- (id)userInfo;
@end

@protocol GFNode <NSObject>
+ (id)attributesWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (id)inputPorts;
- (id)outputPorts;
- (id)attributes;
- (id)userInfo;
@end

@protocol GFGraph <GFNode>
- (BOOL)canAddNode:(id)fp8;
- (BOOL)addNode:(id)fp8;
- (void)removeNode:(id)fp8;
- (id)nodes;
- (BOOL)canConnectPort:(id)fp8 toPort:(id)fp12;
- (id)connectPort:(id)fp8 toPort:(id)fp12;
- (void)breakConnection:(id)fp8;
- (id)connections;
- (BOOL)canPublishPort:(id)fp8;
- (id)publishPort:(id)fp8;
- (void)unpublishPort:(id)fp8;
- (id)isPortPublished:(id)fp8;
@end

@class GFNodeManager;

@protocol GFPlugInRegistration
+ (void)registerNodesWithManager:(GFNodeManager*)manager;
@end

@protocol GFPort <NSObject>
- (id)attributes;
- (id)userInfo;
@end

@protocol GFState <NSObject>
- (id)state;
- (BOOL)setState:(id)fp8;
@end

@protocol GFProxyPort <GFPort>
- (id)originalPort;
@end

@protocol QCGLPort
- (void)set:(CGLContextObj)fp8;
- (void)unset:(CGLContextObj)fp8;
@end
