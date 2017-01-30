#import <QCTypes.h>

@interface GFNodeManager : NSObject
{
    NSString *_namespace;
    pthread_mutex_t _mutex;
    CFDictionaryRef _registry;
    unsigned int _infoListSize;
    struct GFNodeInfo *_infoList;
    void *unused[4];
}

+ (BOOL)nodeRegisteredWithName:(id)fp8;
+ (void)load;
+ (id)managerForNodeNamespace:(id)fp8;
+ (id)nodeInstanceWithName:(id)fp8;
+ (id)nodeInstanceWithClassName:(id)fp8 identifier:(id)fp12;
- (id)init;
- (id)initWithNamespace:(id)fp8;
- (void)finalize;
- (void)dealloc;
- (id)nodeNamespace;
- (struct GFNodeInfo *)_nodeInfoWithName:(id)fp8;
- (id)nodeAttributesWithName:(id)fp8;
- (id)nodeInstanceWithName:(id)fp8;
- (void)registerNodeWithClass:(Class)class;
- (void)registerNodeWithClass:(Class)class identifier:(id)fp12;
- (id)_nodeFromArchive:(id)fp8;
- (id)_attributesFromArchive:(id)fp8;
- (void)registerNode:(id)fp8 withName:(id)fp12;
- (void)registerNodeWithName:(id)fp8 constructor:(id)fp12 instanceSelector:(SEL)fp16 attributesSelector:(SEL)fp20 info:(id)fp24;
- (BOOL)isNodeRegisteredWithName:(id)fp8;
- (id)nodeNames;
- (id)nodeNamesContainingAttributes:(id)fp8;
- (id)nodeNamesMatchingAttributes:(id)fp8;
- (id)nodeNamesExcludingAttributes:(id)fp8;
- (id)nodeNameWithClassName:(id)fp8 identifier:(id)fp12;
- (void)applyFunction:(void *)fp8 context:(void *)fp12;
- (id)description;

@end

@interface GFNodeManager (PlugIns)
- (void)loadPlugInAtPath:(NSString*)path;
- (void)loadPlugInsInFolder:(id)fp8 withExtensions:(id)fp12;
- (void)loadPlugInsInLibrary:(id)fp8 withExtensions:(id)fp12;
@end

