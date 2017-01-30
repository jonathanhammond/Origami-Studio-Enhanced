#import <GFNodeActor.h>

@interface QCPatchActor : GFNodeActor
{
}

- (id)_colorForNode:(id)fp8;
- (void)_makeCGPathForNode:(id)fp8 bounds:(NSRect)fp12 inContext:(CGContextRef)fp28;
- (id)inspectorForPatch:(id)fp8;
- (id)parametersViewForPatch:(id)fp8;
- (NSSize)sizeForNode:(id)fp8;
- (void)drawNode:(id)fp8 bounds:(NSRect)fp12 view:(id)fp28;
- (void)_setLayer:(id)fp8;
- (void)_parent:(id)fp8;
- (void)_local:(id)fp8;
- (void)_external:(id)fp8;
- (id)menuForNode:(id)fp8 view:(id)fp12;
- (BOOL)trackMouse:(id)fp8 inNode:(id)fp12 bounds:(NSRect)fp16 view:(id)fp32;
@end

@interface QCPatchActor (Tooltip)
- (id)_tooltipViewForPort:(id)fp8;
- (id)setupTooltipViewForPoint:(NSPoint)fp8 inNode:(id)fp16 bounds:(NSRect)fp20 tooltipBounds:(NSRect *)fp36;
- (void)resetTooltipView;
@end

