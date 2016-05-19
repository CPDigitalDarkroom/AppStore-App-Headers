/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:43 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString, UIImage;

@interface BaseProfileEntity : NSObject {

	NSURL* _uri;
	NSString* _name;
	NSURL* _imageURL;
	UIImage* _image;

}

@property (nonatomic,retain) NSURL * uri;                   //@synthesize uri=_uri - In the implementation block
@property (nonatomic,copy) NSString * name;                 //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSURL * imageURL;              //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,retain) UIImage * image;               //@synthesize image=_image - In the implementation block
+(id)firstValidStringFromJsonDict:(id)arg1 withKeypaths:(id)arg2 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(UIImage *)image;
-(NSURL *)uri;
-(void)setUri:(NSURL *)arg1 ;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSURL *)imageURL;
@end

