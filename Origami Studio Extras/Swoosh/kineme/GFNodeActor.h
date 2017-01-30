
@interface GFNodeActor : NSObject
{
}

+ (id)sharedActor;
- (id)__portIsConnected:(id)fp8;
- (NSSize)sizeForNode:(id)fp8;
- (id)portForPoint:(NSPoint)fp8 inNode:(id)fp16 bounds:(NSRect)fp20;
- (NSPoint)pointForPort:(id)fp8 inNode:(id)fp12 bounds:(NSRect)fp16;
- (void)drawNode:(id)fp8 bounds:(NSRect)fp12 view:(id)fp28;
- (void)drawSelectionRingWithColor:(id)fp8 width:(float)fp12 forNode:(id)fp16 bounds:(NSRect)fp20 view:(id)fp36;
- (BOOL)trackMouse:(id)fp8 inNode:(id)fp12 bounds:(NSRect)fp16 view:(id)fp32;
- (id)menuForNode:(id)fp8 view:(id)fp12;
- (BOOL)nodeAcceptsFirstResponder:(id)fp8 view:(id)fp12;
- (BOOL)nodeBecomesFirstResponder:(id)fp8 view:(id)fp12;
- (BOOL)nodeResignsFirstResponder:(id)fp8 view:(id)fp12;
- (BOOL)handleKeyUp:(id)fp8 inNode:(id)fp12 view:(id)fp16;
- (BOOL)handleKeyDown:(id)fp8 inNode:(id)fp12 view:(id)fp16;
- (id)setupInspectorViewsForNode:(id)fp8;
- (void)resetInspectorViews;
- (id)tooltipStringForPoint:(NSPoint)fp8 inNode:(id)fp16 bounds:(NSRect)fp20 tooltipBounds:(NSRect *)fp36;
- (id)setupTooltipViewForPoint:(NSPoint)fp8 inNode:(id)fp16 bounds:(NSRect)fp20 tooltipBounds:(NSRect *)fp36;
- (void)resetTooltipView;
@end

@interface GFNodeActor (Private)
- (id)_titleTextAttributesForNode:(id)fp8;
- (id)_portTextAttributesForNode:(id)fp8;
- (id)_colorForNode:(id)fp8;
- (void)_makeCGPathForNode:(id)fp8 bounds:(NSRect)fp12 inContext:(CGContextRef)fp28;
@end

@interface GFNodeActor (MenuActions)
- (void)_publish:(id)fp8;
- (void)_editSubgraph:(id)fp8;
@end

