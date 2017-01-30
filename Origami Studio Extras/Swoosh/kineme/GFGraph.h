#import "QCProtocols.h"
#import "GFList.h"
#import "GFNode.h"

@interface GFGraph : GFNode <GFGraph>
{
    GFList *_nodes;
    GFList *_connections;
    BOOL _finalizing;
    void *unused2[4];
}

- (void)_finalize_GFGraph;
- (void)finalize;
- (void)dealloc;
- (BOOL)canAddNode:(id)fp8;
- (BOOL)addNode:(id)fp8 forKey:(id)fp12;
- (BOOL)addNode:(id)fp8;
- (void)removeNodeForKey:(id)fp8;
- (void)removeNode:(id)fp8;
- (GFList*)nodes;
- (BOOL)canConnectPort:(id)fp8 toPort:(id)fp12;
- (id)argumentsForConnectionFromPort:(id)fp8 toPort:(id)fp12;
- (id)createConnectionFromPort:(id)fp8 toPort:(id)fp12 forKey:(id)fp16;
- (id)connectPort:(id)fp8 toPort:(id)fp12;
- (void)deleteConnectionForKey:(id)fp8;
- (void)breakConnection:(id)fp8;
- (GFList*)connections;
- (id)nodeForKey:(id)key;
- (id)keyForNode:(id)fp8;
- (id)connectionForKey:(id)key;
- (id)keyForConnection:(id)fp8;
- (id)pathForNode:(id)fp8;
- (id)nodeForPath:(id)fp8;
- (id)pathForPort:(id)fp8;
- (id)portForPath:(id)fp8;
- (BOOL)canPublishPort:(id)fp8;
- (id)createProxyPortWithOriginalPort:(id)fp8 forKey:(id)fp12;
- (id)publishPort:(id)fp8;
- (void)deleteProxyPortForKey:(id)fp8;
- (void)unpublishPort:(id)fp8;
- (id)proxyPortForOriginalPort:(id)fp8;
- (id)isPortPublished:(id)fp8;
- (id)state;
- (BOOL)setState:(id)fp8;

@end

@interface GFGraph (Private)
+ (Class)_baseClass;
+ (Class)_proxyClass;
- (id)_uniqueProxyPortKeyFromPort:(id)fp8;
- (BOOL)_finalizing;
- (BOOL)_isKeyInUse:(id)fp8;
- (id)_uniqueKeyFromNode:(id)fp8;
- (id)_uniqueConnectionKey;
- (GFList*)_connections;
- (GFList*)_nodes;
- (void)_validateState;
- (void)_nodePortsLayoutDidChange:(id)fp8;
- (void)_layoutUpdated;
- (BOOL)_saveState:(id)fp8 filterTarget:(id)fp12 filterAction:(SEL)fp16;
- (BOOL)_loadState:(id)fp8;
@end

