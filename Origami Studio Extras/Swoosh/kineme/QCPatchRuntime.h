#import <QCPatch.h>
#import <QCContext.h>

@interface QCPatchRuntime : NSObject
{
    QCPatch *_patch;
    QCContext *_context;
    NSMutableDictionary *_options;
    int _flags;
    unsigned int frameID;
    double frameTime;
    unsigned int patchTotalCount;
    unsigned int patchActiveCount;
    unsigned int patchTraversedCount;
    unsigned int patchExecutedCount;
    double patchExecutionTime;
    double patchRenderTime;
}

- (id)init;
- (id)initWithPatch:(QCPatch*)patch context:(QCContext*)context options:(NSDictionary*)options;
- (void)dealloc;
- (id)patch;
- (id)context;
- (id)options;
- (void)setOption:(id)fp8 forKey:(id)key;
- (int)_flags;

@end

