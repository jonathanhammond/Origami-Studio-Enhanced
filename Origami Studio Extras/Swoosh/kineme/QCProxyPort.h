#import <QCPort.h>

@interface QCProxyPort : QCPort
{
}

+ (id)allocWithZone:(NSZone *)fp8;
+ (Class)baseClass;
- (id)initWithNode:(id)fp8 arguments:(id)fp12;
- (void)portWillDeleteFromNode;
- (id)methodSignatureForSelector:(SEL)fp8;
- (void)forwardInvocation:(id)fp8;
- (unsigned int)_timestamp;
- (id)value;
- (BOOL)setValue:(id)fp8;
- (BOOL)acceptValuesOfClass:(Class)class;
- (Class)valueClass;
- (BOOL)canConnectToPort:(id)fp8;
- (BOOL)takeValue:(id)fp8 fromPort:(id)fp12;
- (id)stateValue;
- (BOOL)setStateValue:(id)fp8;
- (id)_argumentsFromAttributesKey:(id)fp8 originalArguments:(id)fp12;

@end

@interface QCProxyPort (QCPort)
- (double)doubleValue;
- (void)setDoubleValue:(double)fp8;
- (unsigned int)indexValue;
- (void)setIndexValue:(unsigned int)fp8;
- (BOOL)booleanValue;
- (void)setBooleanValue:(BOOL)fp8;
- (id)stringValue;
- (void)setStringValue:(id)fp8;
- (void)getRed:(float *)fp8 green:(float *)fp12 blue:(float *)fp16 alpha:(float *)fp20;
- (void)setRed:(float)fp8 green:(float)fp12 blue:(float)fp16 alpha:(float)fp20;
- (id)rawValue;
- (void)setRawValue:(id)fp8;
@end

@interface QCProxyPort (ValueEditing)
- (void)editValue:(id)fp8 view:(id)fp12;
@end

@interface QCProxyPort (Tooltip)
- (id)tooltipString;
- (id)tooltipExtensionView;
- (NSSize)tooltipExtensionViewSize:(id)fp8;
@end

@interface QCProxyPort (QCGLImagePort)
- (id)imageValue;
- (void)setImageValue:(id)fp8;
@end

@interface QCProxyPort (QCStructurePort)
- (id)structureValue;
- (void)setStructureValue:(id)fp8;
@end

@interface QCProxyPort (QCObjectPort)
- (id)object;
- (BOOL)setObject:(id)fp8;
@end

@interface QCProxyPort (ParameterView)
- (id)setupParameterView;
- (void)resetParameterView:(id)fp8;
@end

