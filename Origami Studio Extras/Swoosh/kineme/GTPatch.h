//#import <QCPatch.h>
#import <GFGraph.h>
#import <QCContext.h>

@class QCPatchRuntime, QCPort, QCBooleanPort, QCNumberPort;

@interface GTPatch : GFGraph
{
  
	void *loadPlugInAtPath;
	void *loadPlugInsInFolder;
	void *loadPlugInsInLibrary;
	

}

@end

@interface GTPatch (Registry)
+ (id)patchManager;
+ (id)patchNames;
+ (id)patchWithName:(id)fp8;
+ (id)patchAttributesWithName:(id)fp8;
+ (void)loadPlugInAtPath:(id)fp8;
+ (void)loadPlugInsInFolder:(id)fp8;
+ (void)loadPlugInsInLibrary:(id)fp8;
@end
