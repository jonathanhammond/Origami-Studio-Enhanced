@interface QCContext : NSObject
{
    NSDictionary *_options;
    NSMutableDictionary *_userInfo;
    void *unused[4];
}

- (id)init;
- (id)initWithOptions:(id)options;
- (void)dealloc;
- (NSDictionary *)options;
- (void)willExecutePatch:(id)fp8;
- (void)didExecutePatch:(id)fp8;
- (NSMutableDictionary *)userInfo;
- (id)description;

@end


