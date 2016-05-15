/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:27 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Twitter/Twitter-Structs.h>
@class TFNTwitterStatus, NSString, UIImage, TFNTwitterEntityURL;

@interface T1PrepopulatedSlideshowSlide : NSObject {

	TFNTwitterStatus* _status;
	NSString* _imageURLString;
	UIImage* _image;
	UIImage* _previewImage;
	id _transitionObject;
	TFNTwitterEntityURL* _entityURL;
	int _slideType;
	CGSize _imageSize;

}

@property (nonatomic,retain) TFNTwitterStatus * status;                    //@synthesize status=_status - In the implementation block
@property (nonatomic,copy) NSString * imageURLString;                      //@synthesize imageURLString=_imageURLString - In the implementation block
@property (nonatomic,retain) UIImage * image;                              //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIImage * previewImage;                       //@synthesize previewImage=_previewImage - In the implementation block
@property (assign,nonatomic) CGSize imageSize;                             //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,retain) id transitionObject;                          //@synthesize transitionObject=_transitionObject - In the implementation block
@property (nonatomic,retain) TFNTwitterEntityURL * entityURL;              //@synthesize entityURL=_entityURL - In the implementation block
@property (assign,nonatomic) int slideType;                                //@synthesize slideType=_slideType - In the implementation block
-(id)transitionObject;
-(NSString *)imageURLString;
-(TFNTwitterEntityURL *)entityURL;
-(void)setImageURLString:(NSString *)arg1 ;
-(void)setEntityURL:(TFNTwitterEntityURL *)arg1 ;
-(void)setSlideType:(int)arg1 ;
-(int)slideType;
-(void)setTransitionObject:(id)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(CGSize)imageSize;
-(TFNTwitterStatus *)status;
-(void)setStatus:(TFNTwitterStatus *)arg1 ;
-(void)setPreviewImage:(UIImage *)arg1 ;
-(UIImage *)previewImage;
@end

