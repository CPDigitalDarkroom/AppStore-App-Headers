/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:45 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol ASDisplayProperties <NSObject>
@property (assign,nonatomic) CGPoint position; 
@property (assign,nonatomic) float zPosition; 
@property (assign,nonatomic) CGPoint anchorPoint; 
@property (nonatomic,retain) id contents; 
@property (assign,nonatomic) float cornerRadius; 
@property (assign,nonatomic) float contentsScale; 
@property (assign,nonatomic) CATransform3D transform; 
@property (assign,nonatomic) CATransform3D sublayerTransform; 
@property (assign,nonatomic) char needsDisplayOnBoundsChange; 
@property (nonatomic,retain) CGColorRef shadowColor; 
@property (assign,nonatomic) float shadowOpacity; 
@property (assign,nonatomic) CGSize shadowOffset; 
@property (assign,nonatomic) float shadowRadius; 
@property (assign,nonatomic) float borderWidth; 
@property (assign,getter=isOpaque,nonatomic) char opaque; 
@property (nonatomic,retain) CGColorRef borderColor; 
@property (nonatomic,copy) NSString * asyncdisplaykit_name; 
@property (nonatomic,retain) CGColorRef backgroundColor; 
@property (assign,nonatomic) char allowsEdgeAntialiasing; 
@property (assign,nonatomic) unsigned edgeAntialiasingMask; 
@required
-(void)setAsyncdisplaykit_name:(id)arg1;
-(NSString *)asyncdisplaykit_name;
-(float)zPosition;
-(char)allowsEdgeAntialiasing;
-(float)shadowOpacity;
-(void)setOpaque:(char)arg1;
-(void)setNeedsDisplayOnBoundsChange:(char)arg1;
-(void)setNeedsDisplay;
-(void)setBackgroundColor:(CGColorRef)arg1;
-(CGColorRef)backgroundColor;
-(void)setNeedsLayout;
-(void)setCornerRadius:(float)arg1;
-(void)setShadowColor:(CGColorRef)arg1;
-(void)setShadowOffset:(CGSize)arg1;
-(void)setTransform:(CATransform3D)arg1;
-(void)setPosition:(CGPoint)arg1;
-(CATransform3D)transform;
-(id)contents;
-(char)isOpaque;
-(float)cornerRadius;
-(CGPoint)position;
-(char)needsDisplayOnBoundsChange;
-(float)contentsScale;
-(void)setContentsScale:(float)arg1;
-(void)setContents:(id)arg1;
-(void)setSublayerTransform:(CATransform3D)arg1;
-(CGPoint)anchorPoint;
-(CGSize)shadowOffset;
-(void)setAnchorPoint:(CGPoint)arg1;
-(CGColorRef)shadowColor;
-(void)setBorderWidth:(float)arg1;
-(void)setBorderColor:(CGColorRef)arg1;
-(void)setEdgeAntialiasingMask:(unsigned)arg1;
-(CGColorRef)borderColor;
-(void)setZPosition:(float)arg1;
-(float)borderWidth;
-(void)setAllowsEdgeAntialiasing:(char)arg1;
-(float)shadowRadius;
-(void)setShadowOpacity:(float)arg1;
-(void)setShadowRadius:(float)arg1;
-(CATransform3D)sublayerTransform;
-(unsigned)edgeAntialiasingMask;

@end

