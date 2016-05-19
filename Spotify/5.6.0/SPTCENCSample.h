/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:48 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SPTCENCBuffer;

@interface SPTCENCSample : NSObject {

	SPTCENCBuffer* _encrypted;
	SPTCENCBuffer* _keyID;
	SPTCENCBuffer* _iv;
	SPTCENCBuffer* _clearBuffer;

}

@property (nonatomic,readonly) SPTCENCBuffer * encrypted;                //@synthesize encrypted=_encrypted - In the implementation block
@property (nonatomic,readonly) SPTCENCBuffer * keyID;                    //@synthesize keyID=_keyID - In the implementation block
@property (nonatomic,readonly) SPTCENCBuffer * iv;                       //@synthesize iv=_iv - In the implementation block
@property (nonatomic,readonly) SPTCENCBuffer * clearBuffer;              //@synthesize clearBuffer=_clearBuffer - In the implementation block
-(SPTCENCBuffer *)keyID;
-(SPTCENCBuffer *)iv;
-(SPTCENCBuffer *)clearBuffer;
-(id)initWithEncryptedData:(id)arg1 keyID:(id)arg2 iv:(id)arg3 clearBuffer:(id)arg4 ;
-(SPTCENCBuffer *)encrypted;
@end

