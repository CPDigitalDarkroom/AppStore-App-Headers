/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:30 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <Spotify/SPTTouchViewEffect.h>

@protocol SPTImageLoaderFactory;
@class UITableViewCell, UICollectionViewCell, NSArray, SPTTouchViewEngineNode, NSString;

@interface SPTTouchViewContextEffect : NSObject <SPTTouchViewEffect> {

	id<SPTImageLoaderFactory> _imageLoaderFactory;
	UITableViewCell* _previousTableViewCell;
	UICollectionViewCell* _previousCollectionViewCell;
	NSArray* _preloadedSamples;
	SPTTouchViewEngineNode* _currentNode;

}

@property (nonatomic,retain) id<SPTImageLoaderFactory> imageLoaderFactory;                          //@synthesize imageLoaderFactory=_imageLoaderFactory - In the implementation block
@property (assign,nonatomic,__weak) UITableViewCell * previousTableViewCell;                        //@synthesize previousTableViewCell=_previousTableViewCell - In the implementation block
@property (assign,nonatomic,__weak) UICollectionViewCell * previousCollectionViewCell;              //@synthesize previousCollectionViewCell=_previousCollectionViewCell - In the implementation block
@property (nonatomic,retain) NSArray * preloadedSamples;                                            //@synthesize preloadedSamples=_preloadedSamples - In the implementation block
@property (nonatomic,retain) SPTTouchViewEngineNode * currentNode;                                  //@synthesize currentNode=_currentNode - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SPTImageLoaderFactory>)imageLoaderFactory;
-(void)setImageLoaderFactory:(id<SPTImageLoaderFactory>)arg1 ;
-(void)setPreloadedSamples:(NSArray *)arg1 ;
-(void)resetNode:(id)arg1 ;
-(void)viewEngine:(id)arg1 unregisterNode:(id)arg2 ;
-(void)viewEngine:(id)arg1 willBeginInteractionAtPosition:(CGPoint)arg2 nodes:(id)arg3 ;
-(void)viewEngine:(id)arg1 didCancelInteractionAtPosition:(CGPoint)arg2 nodes:(id)arg3 ;
-(id)currentNodeForViewEngine:(id)arg1 ;
-(unsigned)maximumNumberOfPreviews;
-(char)viewEngine:(id)arg1 canBeginInteractionAtPosition:(CGPoint)arg2 nodes:(id)arg3 ;
-(void)viewEngine:(id)arg1 didBeginInteractionAtPosition:(CGPoint)arg2 nodes:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)viewEngine:(id)arg1 didMoveInteractionToPosition:(CGPoint)arg2 nodes:(id)arg3 ;
-(void)viewEngine:(id)arg1 didEndInteractionAtPosition:(CGPoint)arg2 nodes:(id)arg3 ;
-(NSArray *)preloadedSamples;
-(void)showOrUpdateNode:(id)arg1 position:(CGPoint)arg2 engine:(id)arg3 ;
-(void)tryDelayedFetchPreviewsForNode:(id)arg1 position:(CGPoint)arg2 engine:(id)arg3 ;
-(id)createContextViewControllerWithPreviews:(id)arg1 audioEngine:(id)arg2 image:(id)arg3 ;
-(void)bringViewToFront:(id)arg1 ;
-(UITableViewCell *)previousTableViewCell;
-(void)setZPosition:(float)arg1 forCell:(id)arg2 superclass:(Class)arg3 ;
-(void)setPreviousTableViewCell:(UITableViewCell *)arg1 ;
-(UICollectionViewCell *)previousCollectionViewCell;
-(void)setPreviousCollectionViewCell:(UICollectionViewCell *)arg1 ;
-(void)hideNode:(id)arg1 ;
-(void)updateNodes:(id)arg1 position:(CGPoint)arg2 engine:(id)arg3 initial:(char)arg4 completion:(/*^block*/id)arg5 ;
-(id)initWithImageLoaderFactory:(id)arg1 ;
-(void)setCurrentNode:(SPTTouchViewEngineNode *)arg1 ;
-(SPTTouchViewEngineNode *)currentNode;
@end

