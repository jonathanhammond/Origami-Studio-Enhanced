#import <QCPatch.h>

@interface QCInspector : NSObject
{
    NSView *view;
    QCPatch *_patch;
}

+ (id)viewNibName;
+ (id)viewTitle;
- (id)init;
- (void)didLoadNib;
- (id)patch;
- (void)setupViewForPatch:(id)fp8;
- (void)resetView;
- (id)view;

@end


