#import <QCProtocols.h>
#import <GFNode.h>

@interface GFPort : NSObject <GFProxyPort, GFState>
{
    unsigned int _flags;
    GFNode *_owner;
    GFPort *_originalPort;
    NSDictionary *_attributes;
    NSMutableDictionary *_userInfo;
    void *unused[4];
}

- (id)init;
- (id)initWithNode:(id)fp8 arguments:(id)fp12;
- (void)dealloc;
- (void)portWillDeleteFromNode;
- (id)node;
- (id)attributes;
- (id)userInfo;
- (id)state;
- (BOOL)setState:(id)fp8;
- (void)stateUpdated;
- (id)description;
- (id)key;
- (GFPort*)originalPort;

@end

@interface GFPort (Private)
- (unsigned int)_flags;
- (void)_setFlags:(unsigned int)flags;
- (void)_unsetFlags:(unsigned int)flags;
@end

