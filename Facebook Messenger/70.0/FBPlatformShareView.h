/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:44 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIControl.h>

@class FBRichTextView, FBNetworkImageView, NSString, UIImage, NSURL, NSAttributedString, UIColor;

@interface FBPlatformShareView : UIControl {

	FBRichTextView* _attributionLabel;
	FBRichTextView* _descriptionLabel;
	FBNetworkImageView* _photoView;
	FBRichTextView* _robotextLabel;
	FBRichTextView* _titleLabel;
	char _attributionHighlighted;
	char _titleHighlighted;
	NSString* _attribution;
	NSString* _descriptionText;
	unsigned _mode;
	UIImage* _photoImage;
	UIImage* _photoPlaceholderImage;
	NSURL* _photoURL;
	NSAttributedString* _robotext;
	NSString* _title;

}

@property (nonatomic,copy) NSString * attribution;                         //@synthesize attribution=_attribution - In the implementation block
@property (nonatomic,retain) UIColor * attributionColor; 
@property (nonatomic,retain) UIColor * descriptionColor; 
@property (nonatomic,copy) NSString * descriptionText;                     //@synthesize descriptionText=_descriptionText - In the implementation block
@property (assign,nonatomic) unsigned mode;                                //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) UIImage * photoImage;                         //@synthesize photoImage=_photoImage - In the implementation block
@property (nonatomic,retain) UIImage * photoPlaceholderImage;              //@synthesize photoPlaceholderImage=_photoPlaceholderImage - In the implementation block
@property (nonatomic,copy) NSURL * photoURL;                               //@synthesize photoURL=_photoURL - In the implementation block
@property (nonatomic,copy) NSAttributedString * robotext;                  //@synthesize robotext=_robotext - In the implementation block
@property (nonatomic,retain) UIColor * robotextColor; 
@property (nonatomic,copy) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIColor * titleColor; 
+(float)heightWithTitle:(id)arg1 attribution:(id)arg2 description:(id)arg3 robotext:(id)arg4 includePhoto:(char)arg5 mode:(unsigned)arg6 constrainedToSize:(CGSize)arg7 ;
-(NSURL *)photoURL;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 ;
-(void)setRobotextColor:(UIColor *)arg1 ;
-(void)setAttributionColor:(UIColor *)arg1 ;
-(void)setDescriptionColor:(UIColor *)arg1 ;
-(void)setPhotoURL:(NSURL *)arg1 ;
-(NSAttributedString *)robotext;
-(void)_updateRobotext;
-(void)setRobotext:(NSAttributedString *)arg1 ;
-(void)_didTapAttribution:(id)arg1 ;
-(void)_updateSubviewsForMode;
-(char)_includePhoto;
-(UIImage *)photoPlaceholderImage;
-(UIColor *)attributionColor;
-(UIColor *)descriptionColor;
-(void)setPhotoPlaceholderImage:(UIImage *)arg1 ;
-(UIColor *)robotextColor;
-(void)_updatePhotoView;
-(UIImage *)photoImage;
-(void)setPhotoImage:(UIImage *)arg1 ;
-(void)setOpaque:(char)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(NSString *)title;
-(void)setMode:(unsigned)arg1 ;
-(unsigned)mode;
-(void)setTitleColor:(UIColor *)arg1 ;
-(UIColor *)titleColor;
-(void)setAttribution:(NSString *)arg1 ;
-(NSString *)attribution;
-(void)setDescriptionText:(NSString *)arg1 ;
-(NSString *)descriptionText;
@end

