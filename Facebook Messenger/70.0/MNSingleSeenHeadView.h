/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:59 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIView.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNAnimationActionOverriding.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNSeenHeadView.h>

@class UIImageView, MNSeenHeadActionOverrider, FBMUser, NSString, UIImage;

@interface MNSingleSeenHeadView : UIView <MNAnimationActionOverriding, MNSeenHeadView> {

	UIImageView* _headView;
	UIImageView* _headBorderView;
	MNSeenHeadActionOverrider* _seenHeadActionOverrider;
	unsigned _seenHeadSize;
	FBMUser* _DEPRECATED_user;
	NSString* _userId;

}

@property (nonatomic,copy) FBMUser * DEPRECATED_user;               //@synthesize DEPRECATED_user=_DEPRECATED_user - In the implementation block
@property (nonatomic,copy) NSString * userId;                       //@synthesize userId=_userId - In the implementation block
@property (nonatomic,retain) UIImage * headImage; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned seenHeadSize;                 //@synthesize seenHeadSize=_seenHeadSize - In the implementation block
+(CGSize)sizeForSeenHeadSize:(unsigned)arg1 ;
-(void)setSeenHeadSize:(unsigned)arg1 ;
-(id)initWithUsesManhattanPath:(char)arg1 ;
-(char)shouldOverrideActionForKey:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 ;
-(id)actionForKey:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 andTemplateAnimation:(id)arg4 ;
-(unsigned)seenHeadSize;
-(void)setHeadImage:(UIImage *)arg1 ;
-(UIImage *)headImage;
-(void)setHeadImage:(id)arg1 animated:(char)arg2 ;
-(FBMUser *)DEPRECATED_user;
-(void)setDEPRECATED_user:(FBMUser *)arg1 ;
-(void)layoutSubviews;
-(NSString *)description;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setUserId:(NSString *)arg1 ;
-(NSString *)userId;
@end

