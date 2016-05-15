/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:29 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/T1PhotoGalleryViewCell.h>

@class UIImageView;

@interface T1PhotoGalleryViewButtonCell : T1PhotoGalleryViewCell {

	unsigned _type;
	UIImageView* _imageView;

}

@property (nonatomic,readonly) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) unsigned type;                          //@synthesize type=_type - In the implementation block
-(void)_updateAccessibilityLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(void)setEnabled:(char)arg1 ;
-(UIImageView *)imageView;
-(void)_updateImageView;
@end

