#import <GFGraphView.h>

@interface QCPatchView : GFGraphView
{
}

- (id)_colorForConnection:(id)fp8;
- (BOOL)_editNode:(id)fp8;
- (void)_addSubgraph:(id)fp8;
- (void)__computeOrder:(id)fp8 context:(void *)fp12;
- (id)_createSubgraphFromSelection:(id)fp8;
- (id)menuForGraph;
- (void)_finishInitialization;
- (BOOL)acceptDroppedFile:(id)fp8;
- (unsigned int)draggingEntered:(id)fp8;
- (BOOL)performDroppedFile:(id)fp8 atPosition:(NSPoint)fp12;
- (BOOL)performDragOperation:(id)fp8;
@end

@interface QCPatchView (Wrappers)
- (void)setPatch:(id)fp8;
- (id)patch;
@end

