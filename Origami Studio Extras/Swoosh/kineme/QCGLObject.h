#import <QCObject.h>

@class QCOpenGLContext;

@interface QCGLObject : QCObject
{
    QCOpenGLContext *_context;
}

+ (id) allocWithZone:(NSZone*)zone;
- (void) didRegisterWithOpenGLContext;
- (void) willUnregisterFromOpenGLContext;
- (void) registerWithOpenGLContext:(id)fp8;
- (void) unregisterFromOpenGLContext;
- (QCOpenGLContext*) openGLContext;
- (void) _setContext:(id)fp8;
- (void) finalize;
- (void) dealloc;

@end

