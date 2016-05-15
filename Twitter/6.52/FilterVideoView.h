/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:58 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/GLKViewDelegate.h>
#import <Twitter/GLKViewControllerDelegate.h>

@class FilterRenderer, GLKView, GLKViewController, Filter, NSString;

@interface FilterVideoView : UIView <GLKViewDelegate, GLKViewControllerDelegate> {

	CVOpenGLESTextureCacheRef _cvTextureCache;
	FilterRenderer* _filterRenderer;
	GLKView* _glView;
	GLKViewController* _glController;
	unsigned _texture;
	CGSize _textureSize;
	char _flipX;
	Filter* _filter;

}

@property (nonatomic,retain) Filter * filter;                       //@synthesize filter=_filter - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 filterRenderer:(id)arg2 ;
-(void)setImageBuffer:(CVBufferRef)arg1 flipX:(char)arg2 ;
-(void)glkViewControllerUpdate:(id)arg1 ;
-(Filter *)filter;
-(void)dealloc;
-(void)setFilter:(Filter *)arg1 ;
-(void)glkView:(id)arg1 drawInRect:(CGRect)arg2 ;
@end

